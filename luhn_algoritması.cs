Console.Write("Kart numarası giriniz:");
string kartnumarasi = Console.ReadLine();
int toplam = 0;
for (int i = 0; i < 16; i++)
{
    int numara = Convert.ToInt32(kartnumarasi[i].ToString());
    if (i % 2 == 0) 
    {
        numara *= 2;
        if (numara > 9)
        {
            toplam += numara/10 + numara%10;
        }
        else
        {
            toplam += numara;
        }
    }
    else
    {
        toplam += numara;
    }
}
if (toplam % 10 == 0) {
    Console.WriteLine("GECERLİ. Toplam:" + toplam);
}
else
{
    Console.WriteLine("GECERSİZ. Toplam:" + toplam);
}
