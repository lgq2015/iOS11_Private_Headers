/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDSpotlightItemRecorderOperation : NSObject {
    NSString * _bundleID;
    NSArray * _items;
    long long  _type;
}

@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, retain) NSArray *items;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (id)bundleID;
- (id)items;
- (id)operationByCombiningOperation:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
