/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioStationTreeNode : NSObject <NSCopying, NSMutableCopying> {
    RadioArtworkCollection * _artworkCollection;
    long long  _childNodeLoadingStyle;
    NSArray * _childNodes;
    long long  _displayStyle;
    bool  _hasAdditionalChildNodes;
    NSString * _name;
    long long  _nodeID;
    NSDictionary * _stationDictionary;
    NSDictionary * _stationTreeNodeDictionary;
}

@property (nonatomic, readonly, copy) RadioArtworkCollection *artworkCollection;
@property (nonatomic, readonly) long long childNodeLoadingStyle;
@property (nonatomic, readonly, copy) NSArray *childNodes;
@property (nonatomic, readonly) long long displayStyle;
@property (nonatomic, readonly) bool hasAdditionalChildNodes;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) long long nodeID;
@property (nonatomic, readonly, copy) NSDictionary *stationDictionary;
@property (nonatomic, readonly, copy) NSDictionary *stationTreeNodeDictionary;

- (void).cxx_destruct;
- (id)artworkCollection;
- (long long)childNodeLoadingStyle;
- (id)childNodes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (long long)displayStyle;
- (bool)hasAdditionalChildNodes;
- (unsigned long long)hash;
- (id)initWithStationTreeNodeDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)name;
- (long long)nodeID;
- (id)stationDictionary;
- (id)stationTreeNodeDictionary;

@end
