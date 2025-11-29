pkgname=qt6-qvideowidget-designer-plugin
pkgver=1
pkgrel=1
arch=(x86_64)
url='https://github.com/ienoneko2025/designer_plugin_qvideowidget.git'
license=('GPL-3.0-only')
pkgdesc='Qt Designer plugin for QVideoWidget'
depends=(qt6-base qt6-multimedia qt6-tools)
makedepends=(cmake)
groups=(qt6-multimedia-designer-plugins)
source=('CMakeLists.txt'
        'qvideowidget_plugin.h'
        'qvideowidget_plugin.cpp'
        'COPYING.txt')
md5sums=('SKIP'
         'SKIP'
         'SKIP'
         '1ebbd3e34237af26da5dc08a4e440464')

build() {
  mkdir -p build
  cd build
  cmake -S .. -DCMAKE_BUILD_TYPE=None -DCMAKE_INSTALL_PREFIX=/usr
  make
}

package() {
  DESTDIR="$pkgdir" make -C build install
  install -Dm644 COPYING.txt -t "$pkgdir"/usr/share/licenses/"$pkgname"/
}
