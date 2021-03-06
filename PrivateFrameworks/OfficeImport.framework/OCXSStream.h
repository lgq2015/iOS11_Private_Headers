/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OCXSStream : NSObject {
    NSMutableArray * mLevelStack;
}

- (int)currentContextChildDepth;
- (int)currentContextDepth;
- (void)dealloc;
- (bool)hasLevels;
- (id)init;
- (bool)popLevel;
- (void)pushLevel:(int)arg1 name:(const char *)arg2;

@end
