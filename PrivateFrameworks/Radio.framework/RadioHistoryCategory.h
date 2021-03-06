/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioHistoryCategory : NSObject <NSCopying, NSMutableCopying> {
    NSString * _categoryDescription;
    NSArray * _items;
    NSString * _name;
    NSString * _stationHash;
    long long  _stationID;
    long long  _type;
}

@property (nonatomic, readonly, copy) NSString *categoryDescription;
@property (nonatomic, readonly, copy) NSArray *items;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *stationHash;
@property (nonatomic, readonly) long long stationID;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)categoryDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)items;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)name;
- (id)stationHash;
- (long long)stationID;
- (long long)type;

@end
