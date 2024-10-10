int main() {
char *os = "Linux";
printf("os: %s\n", os);
printf(" Karakter \'%c\' pertama ditemukan pada indexs ke-%d\n",
'L', indexOfChar(os, 'L'));
printf(" Karakter \'%c\' pertama ditemukan pada indexs ke-%d\n",
'u', indexOfChar(os, 'u'));
return 0;
}