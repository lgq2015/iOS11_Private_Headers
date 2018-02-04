/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLMomentNode : NSObject {
    PLMomentCluster * __cluster;
    NSDate * __creationDate;
    CLLocation * __location;
    NSObject<NSCopying> * __objectID;
    NSString * __userTag;
    unsigned long long  __userTagType;
    NSNumber * _cacheInsertionIndex;
    bool  _marked;
    bool  _visited;
}

@property (nonatomic, retain) NSNumber *cacheInsertionIndex;
@property (nonatomic) PLMomentCluster *cluster;
@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } coordinate;
@property (nonatomic, readonly, retain) NSDate *creationDate;
@property (nonatomic, readonly) CLLocation *location;
@property (getter=isMarked, nonatomic) bool marked;
@property (nonatomic, readonly, retain) NSObject<NSCopying> *objectID;
@property (nonatomic, readonly) NSString *userTag;
@property (nonatomic, readonly) unsigned long long userTagType;
@property (getter=isVisited, nonatomic) bool visited;

- (id)cacheInsertionIndex;
- (id)cluster;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (id)creationDate;
- (void)dealloc;
- (id)description;
- (id)initWithManagedAsset:(id)arg1;
- (id)initWithPartialFetchDictionary:(id)arg1;
- (bool)isMarked;
- (bool)isTagged;
- (bool)isVisited;
- (id)location;
- (id)objectID;
- (void)setCacheInsertionIndex:(id)arg1;
- (void)setCluster:(id)arg1;
- (void)setMarked:(bool)arg1;
- (void)setVisited:(bool)arg1;
- (id)userTag;
- (unsigned long long)userTagType;

@end
