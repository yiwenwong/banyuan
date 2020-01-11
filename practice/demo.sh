mkdir new 
touch new/new.txt
echo welcome to banyuan >new/new.txt
mkdir newother
mkdir newother/sub
cp new/new.txt newother/sub/new1.txt
mv newother/sub new2
rm -rf new* 
