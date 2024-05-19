$folderPath = 'C:\Users\Eduks\Documents\desenvolvimentos\Angulo\AnguloProject' # Substitua pelo caminho da sua pasta
$wordToUncomment = '//system("cls")'

Get-ChildItem $folderPath -Include *.c, *.h -Recurse | ForEach-Object {
    $file = $_
    $text = Get-Content $file
    $text = $text -replace [regex]::Escape($wordToUncomment), 'system("cls")'
    $text | Set-Content $file
}
