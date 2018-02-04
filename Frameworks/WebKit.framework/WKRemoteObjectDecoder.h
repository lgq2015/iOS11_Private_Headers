/* made by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKRemoteObjectDecoder : NSCoder {
    const struct HashSet<Class, WTF::PtrHash<Class>, WTF::HashTraits<Class> > { struct HashTable<Class, Class, WTF::IdentityExtractor, WTF::PtrHash<Class>, WTF::HashTraits<Class>, WTF::HashTraits<Class> > { Class *x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; } x1; } * _allowedClasses;
    const struct Dictionary { int (**x1)(); id x2; /* Warning: Unrecognized filer type: 'H' using 'void*' */ void*x3; void*x4; short x5; void*x6; void*x7; void*x8; void*x9; void*x10; void*x11; void*x12; void*x13; SEL x14; SEL x15; unsigned short x16; void*x17; const int x18; in void*x19; void*x20; void*x21; void*x22; void*x23; void*x24; SEL x25; SEL x26; void*x27; void*x28; float x29; void*x30; void*x31; const void*x32; void*x33; unsigned int x34; SEL x35; SEL x36; bycopy unsigned int x37/* : ? */; void*x38; void*x39; BOOL x40; void*x41; void*x42; void*x43; void*x44; void*x45; void*x46; void*x47; SEL x48; SEL x49; unsigned short x50; void*x51; const int x52; in void*x53; void*x54; void*x55; short x56; void*x57; void*x58; void*x59; void*x60; void*x61; void*x62; SEL x63; SEL x64; void*x65; void*x66; short x67; void*x68; void*x69; const void*x70; int x71; void*x72; short x73; void*x74; void*x75; void*x76; void*x77; SEL x78; SEL x79; unsigned short x80; void*x81; const int x82; in void*x83; void*x84; void*x85; void*x86; void*x87; void*x88; void*x89; } * _currentDictionary;
    struct RetainPtr<_WKRemoteObjectInterface> { 
        void *m_ptr; 
    }  _interface;
    const struct Array { int (**x1)(); id x2; oneway /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*x3; BOOL x4; void*x5; out const void*x6; void*x7; void*x8; void*x9; SEL x10; SEL x11; void*x12; void*x13; float x14; void*x15; void*x16; const void*x17; void*x18; unsigned int x19; SEL x20; SEL x21; bycopy unsigned int x22/* : ? */; void*x23; void*x24; BOOL x25; void*x26; void*x27; void*x28; void*x29; void*x30; void*x31; void*x32; void*x33; void*x34; void*x35; SEL x36; SEL x37; unsigned char x38; const void*x39; short x40; void*x41; bycopy in bycopy void x42; void*x43; const float x44; long x45; out void*x46; void*x47; void*x48; void*x49; void*x50; void*x51; void*x52; struct RefPtr<API::Object> {} *x53; unsigned int x54; unsigned int x55; } * _objectStream;
    unsigned long long  _objectStreamPosition;
    SEL  _replyToSelector;
    const struct Dictionary { int (**x1)(); id x2; /* Warning: Unrecognized filer type: 'H' using 'void*' */ void*x3; void*x4; short x5; void*x6; void*x7; void*x8; void*x9; void*x10; void*x11; void*x12; void*x13; SEL x14; SEL x15; unsigned short x16; void*x17; const int x18; in void*x19; void*x20; void*x21; void*x22; void*x23; void*x24; SEL x25; SEL x26; void*x27; void*x28; float x29; void*x30; void*x31; const void*x32; void*x33; unsigned int x34; SEL x35; SEL x36; bycopy unsigned int x37/* : ? */; void*x38; void*x39; BOOL x40; void*x41; void*x42; void*x43; void*x44; void*x45; void*x46; void*x47; SEL x48; SEL x49; unsigned short x50; void*x51; const int x52; in void*x53; void*x54; void*x55; short x56; void*x57; void*x58; void*x59; void*x60; void*x61; void*x62; SEL x63; SEL x64; void*x65; void*x66; short x67; void*x68; void*x69; const void*x70; int x71; void*x72; short x73; void*x74; void*x75; void*x76; void*x77; SEL x78; SEL x79; unsigned short x80; void*x81; const int x82; in void*x83; void*x84; void*x85; void*x86; void*x87; void*x88; void*x89; } * _rootDictionary;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)allowedClasses;
- (bool)allowsKeyedCoding;
- (bool)containsValueForKey:(id)arg1;
- (bool)decodeBoolForKey:(id)arg1;
- (const char *)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long*)arg2;
- (double)decodeDoubleForKey:(id)arg1;
- (float)decodeFloatForKey:(id)arg1;
- (int)decodeInt32ForKey:(id)arg1;
- (long long)decodeInt64ForKey:(id)arg1;
- (int)decodeIntForKey:(id)arg1;
- (long long)decodeIntegerForKey:(id)arg1;
- (id)decodeObjectForKey:(id)arg1;
- (id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2;
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void*)arg2;
- (id)initWithInterface:(id)arg1 rootObjectDictionary:(const struct Dictionary { int (**x1)(); id x2; /* Warning: Unrecognized filer type: 'H' using 'void*' */ void*x3; void*x4; short x5; void*x6; void*x7; void*x8; void*x9; void*x10; void*x11; void*x12; void*x13; SEL x14; SEL x15; unsigned short x16; void*x17; const int x18; in void*x19; void*x20; void*x21; void*x22; void*x23; void*x24; SEL x25; SEL x26; void*x27; void*x28; float x29; void*x30; void*x31; const void*x32; void*x33; unsigned int x34; SEL x35; SEL x36; bycopy unsigned int x37/* : ? */; void*x38; void*x39; BOOL x40; void*x41; void*x42; void*x43; void*x44; void*x45; void*x46; void*x47; SEL x48; SEL x49; unsigned short x50; void*x51; const int x52; in void*x53; void*x54; void*x55; short x56; void*x57; void*x58; void*x59; void*x60; void*x61; void*x62; SEL x63; SEL x64; void*x65; void*x66; short x67; void*x68; void*x69; const void*x70; int x71; void*x72; short x73; void*x74; void*x75; void*x76; void*x77; SEL x78; SEL x79; unsigned short x80; void*x81; const int x82; in void*x83; void*x84; void*x85; void*x86; void*x87; void*x88; void*x89; }*)arg2 replyToSelector:(SEL)arg3;
- (bool)requiresSecureCoding;

@end
