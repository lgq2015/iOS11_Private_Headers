/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedViewport : NSObject {
    NSArray * _externalElements;
    NSArray * _groupElements;
    NSString * _identifier;
    NSArray * _internalElements;
}

@property (nonatomic, readonly, copy) NSArray *externalElements;
@property (nonatomic, readonly, copy) NSArray *groupElements;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSArray *internalElements;

+ (id)dataFromViewport:(id)arg1 prune:(bool)arg2 preserveBookmark:(id)arg3;
+ (id)freshlyUnarchivedViewportFromViewport:(id)arg1;
+ (id)pbViewportFromViewport:(id)arg1 prune:(bool)arg2 preserveBookmark:(id)arg3;
+ (id)viewportFromData:(id)arg1;
+ (id)viewportFromPBViewport:(id)arg1;

- (void).cxx_destruct;
- (id)archiveWithPruning:(bool)arg1 preserveBookmark:(id)arg2;
- (id)bookmarkForFirstHeadline;
- (id)bookmarkForGroup:(id)arg1 headline:(id)arg2;
- (id)bookmarkForLastHeadline;
- (id)deflatedCopy;
- (void)enumerateInternalHeadlinesFromBookmark:(id)arg1 toBookmark:(id)arg2 withBlock:(id /* block */)arg3;
- (id)externalElements;
- (id)externalIndexPathForBookmark:(id)arg1;
- (id)groupElements;
- (id)identifier;
- (id)indexPathForHeadlineReferencedByBookmark:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)initWithArchive:(id)arg1;
- (id)initWithIdentifier:(id)arg1 elements:(id)arg2;
- (id)initWithIdentifier:(id)arg1 internalElements:(id)arg2 externalElements:(id)arg3;
- (id)internalElements;
- (id)internalIndexPathForBookmark:(id)arg1;
- (unsigned long long)numberOfHeadlinesConcealedByGap:(id)arg1;

@end
