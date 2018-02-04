/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCDirectoryBreadthEnumerator : NSObject {
    struct { int x1; long long x2; long long x3; char *x4; int x5; long long x6; long long x7; int x8; struct _opaque_pthread_mutex_t { long long x_9_1_1; BOOL x_9_1_2[56]; } x9; struct _telldir {} *x10; } * _dir;
    BRCRelativePath * _parentPath;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithParentPath:(id)arg1 error:(int*)arg2;
- (id)nextObjectWithIsDir:(bool*)arg1 error:(int*)arg2;

@end
