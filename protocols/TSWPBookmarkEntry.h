/* made by EzioChiu.
 */

@protocol TSWPBookmarkEntry <NSObject>

@required

- (NSString *)displayName;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (NSURL *)url;

@end
