/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioSearchResultCategory : NSObject <NSCopying, NSMutableCopying> {
    long long  _categoryType;
    bool  _hasMoreResults;
    NSString * _name;
    NSDictionary * _responseDictionary;
    NSArray * _stationResults;
}

@property (nonatomic, readonly) long long categoryType;
@property (nonatomic, readonly) bool hasMoreResults;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSDictionary *responseDictionary;
@property (nonatomic, readonly, copy) NSArray *stationResults;

- (void).cxx_destruct;
- (id)_initWithResponseDictionary:(id)arg1;
- (long long)categoryType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)hasMoreResults;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)name;
- (id)responseDictionary;
- (id)stationResults;

@end
