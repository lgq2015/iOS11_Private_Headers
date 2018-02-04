/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioTrackHistorySectionInfo : NSObject <NSCopying, NSFetchedResultsSectionInfo, NSMutableCopying> {
    NSString * _indexTitle;
    NSString * _name;
    unsigned long long  _numberOfObjects;
    NSArray * _objects;
}

@property (nonatomic, readonly) NSString *indexTitle;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned long long numberOfObjects;
@property (nonatomic, readonly) NSArray *objects;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)indexTitle;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)name;
- (unsigned long long)numberOfObjects;
- (id)objects;

@end
