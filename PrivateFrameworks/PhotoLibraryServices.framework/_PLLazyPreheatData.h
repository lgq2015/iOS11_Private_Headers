/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface _PLLazyPreheatData : NSData {
    NSData * _data;
    NSString * _path;
}

+ (id)dataWithContentsOfFile:(id)arg1;

- (void)_loadData;
- (const void*)bytes;
- (void)dealloc;
- (id)initWithContentsOfFile:(id)arg1;
- (unsigned long long)length;

@end
