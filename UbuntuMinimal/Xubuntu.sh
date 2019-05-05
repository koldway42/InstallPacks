echo Instalando Pacotes...
sudo apt-get install xubuntu-core^ gpm mc htop curl wget screenfetch
echo configurando gpm
systemctl enable gpm
systemctl start gpm
sudo apt-get update
echo instalando NODE JS...
curl -sL https://deb.nodesource.com/setup_11.x | sudo -E bash -
sudo apt-get install -y nodejs mysql-server php5-common libapache2-mod-php5 php5-cli apache2
sudo ufw allow 'Apache'
node --version
npm --version
npm --global nodemon
systemctl enable httpd
systemctl start httpd
