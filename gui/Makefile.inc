# ex:syn=make

GUI_LIBS=	${SDL_LIBS} ${FREETYPE_LIBS} ${FONTCONFIG_LIBS} \
		${OPENGL_LIBS} ${X11_LIBS} ${XINERAMA_LIBS} \
		${JPEG_LIBS} ${PNG_LIBS} ${MATH_LIBS} ${COCOA_LIBS}

GUI_CFLAGS=	${SDL_CFLAGS} ${FREETYPE_CFLAGS} ${FONTCONFIG_CFLAGS} \
		${OPENGL_CFLAGS} ${X11_CFLAGS} ${XINERAMA_CFLAGS} \
		${JPEG_CFLAGS} ${PNG_CFLAGS} ${MATH_CFLAGS} ${COCOA_CFLAGS}

GUI_LINKS=		ag_gui ${GUI_LIBS}
GUI_LINKS_STATIC=	ag_gui_static ${GUI_LIBS}