echo Instalando Pacotes...
sudo add-apt-repository -y ppa:ricotz/docky
sudo add-apt-repository ppa:papirus/papirus
sudo apt-get update
sudo apt-get install xubuntu-core^ gpm mc htop curl wget screenfetch firefox plank gcc papirus-icon-theme
echo configurando gpm
systemctl enable gpm
systemctl start gpm
sudo apt-get update
echo instalando NODE JS...
curl -sL https://deb.nodesource.com/setup_11.x | sudo -E bash -
sudo apt-get install -y nodejs
node --version
npm --version
npm --global nodemon
