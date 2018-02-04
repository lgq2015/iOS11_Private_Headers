/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHAssetColorMap : NSObject {
    NSDictionary * mAssetPathToColorMap;
}

+ (id)_singletonAlloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)sharedInstance;

- (id)autorelease;
- (id)colorForFilename:(id)arg1 fillSetIdentifier:(id)arg2;
- (id)colorForFilename:(id)arg1 imageSetIdentifier:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;

@end