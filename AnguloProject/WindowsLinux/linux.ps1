$folderPath = '..\..\AnguloProject' # Substitua pelo caminho da sua pasta
$wordToComment = 'system("cls")'

Get-ChildItem $folderPath -Include *.c, *.h -Recurse | ForEach-Object {
    $file = $_
    $text = Get-Content $file
    $text = $text -replace [regex]::Escape($wordToComment), ('//' + $wordToComment)
    $text | Set-Content $file
}
