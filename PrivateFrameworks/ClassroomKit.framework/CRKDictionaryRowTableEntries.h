/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKDictionaryRowTableEntries : NSObject <CRKTableEntries> {
    NSArray * mKeys;
    NSArray * mObjects;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)columnCount;
- (id)entryAtRow:(unsigned long long)arg1 column:(unsigned long long)arg2;
- (id)initWithDictionaryObjects:(id)arg1 keys:(id)arg2;
- (unsigned long long)rowCount;

@end
