/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface CROneOf : NSObject <CRDataType> {
    CRSet * _set;
    NSMapTable * _timestamps;
}

@property (nonatomic, retain) id contents;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CRSet *set;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMapTable *timestamps;

- (void).cxx_destruct;
- (void)addItem:(id)arg1;
- (id)contents;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (void)encodeWithCRCoder:(id)arg1;
- (id)init;
- (id)initWithCRCoder:(id)arg1;
- (void)mergeWith:(id)arg1;
- (void)realizeLocalChangesIn:(id)arg1;
- (id)set;
- (void)setContents:(id)arg1;
- (void)setDocument:(id)arg1;
- (void)setSet:(id)arg1;
- (void)setTimestamps:(id)arg1;
- (void)setUpdated:(id)arg1;
- (id)timestampForNewItem;
- (id)timestamps;
- (id)tombstone;
- (void)walkGraph:(id /* block */)arg1;

@end
