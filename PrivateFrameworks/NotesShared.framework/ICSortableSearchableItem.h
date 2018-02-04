/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICSortableSearchableItem : NSObject {
    NSDate * _creationDate;
    NSDate * _modificationDate;
    double  _rankingScore;
    unsigned long long  _relevanceBitField;
    CSSearchableItem * _searchableItem;
}

@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic, retain) NSDate *modificationDate;
@property (nonatomic) double rankingScore;
@property (nonatomic) unsigned long long relevanceBitField;
@property (nonatomic, retain) CSSearchableItem *searchableItem;

+ (id)sortDescriptorsForICSearchResults;

- (void).cxx_destruct;
- (id)creationDate;
- (id)initWithSearchableItem:(id)arg1 rankingScore:(double)arg2 relevanceBitField:(unsigned long long)arg3;
- (id)modificationDate;
- (double)rankingScore;
- (unsigned long long)relevanceBitField;
- (id)searchableItem;
- (void)setCreationDate:(id)arg1;
- (void)setModificationDate:(id)arg1;
- (void)setRankingScore:(double)arg1;
- (void)setRelevanceBitField:(unsigned long long)arg1;
- (void)setSearchableItem:(id)arg1;

@end
