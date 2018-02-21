for D in *; do
    if [ -d "${D}" ]; then
        echo "${D}"   # your processing here
        cp -a .template/* ${D}/
        sed -i -e 's/PROJECT-NAME/'${D}'/g' ${D}/Makefile
        rm ${D}/Makefile-e
    fi
done
