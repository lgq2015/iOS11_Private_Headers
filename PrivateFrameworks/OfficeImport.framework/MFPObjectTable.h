/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFPObjectTable : NSObject {
    NSMutableDictionary * mObjects;
}

- (void)dealloc;
- (id)init;
- (id)objectAtIndex:(int)arg1;
- (void)setObject:(id)arg1 atIndex:(int)arg2;

@end
