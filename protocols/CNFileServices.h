/* made by EzioChiu.
 */

@protocol CNFileServices <NSObject>

@required

- (NSString *)NSTemporaryDirectory;
- (int)close:(int)arg1;
- (int)dlclose:(void*)arg1;
- (void*)dlopen:(const char *)arg1 :(int)arg2;
- (void*)dlsym:(void*)arg1 :(const char *)arg2;
- (int)errnoValue;
- (int)fcntl_flock:(int)arg1 :(int)arg2 :(struct flock { long long x1; long long x2; int x3; short x4; short x5; }*)arg3;
- (int)flock:(int)arg1 :(int)arg2;
- (int)fstatfs:(int)arg1 :(struct statfs { unsigned int x1; int x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; struct fsid { int x_8_1_1[2]; } x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; BOOL x13[16]; BOOL x14[1024]; BOOL x15[1024]; unsigned int x16[8]; }*)arg2;
- (int)open:(const char *)arg1 :(int)arg2 :(unsigned short)arg3;
- (int)statfs:(const char *)arg1 :(struct statfs { unsigned int x1; int x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; struct fsid { int x_8_1_1[2]; } x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; BOOL x13[16]; BOOL x14[1024]; BOOL x15[1024]; unsigned int x16[8]; }*)arg2;

@end
