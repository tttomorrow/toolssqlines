PRO_NAME=sqlines

function usage()
{
    cat README.md
}

function install()
{
    cd sqlines
    make clean
    make
    mv $PRO_NAME ../bin
    make clean
    cd ..
    echo 'Install Sqlines successfully.'
}

function uninstall()
{
    if [ -f bin/$PRO_NAME ]; then
        cd sqlines
        make clean
        cd ..
        rm bin/$PRO_NAME
        echo 'Uninstall Sqlines successfully.'
    else
	echo 'ERROR: There is no Sqlines.'
    fi
}

if [ "$1" = "-i" ] ;then
        install
elif [ "$1" = "-m" ] ;then
        uninstall
else
        usage
fi

