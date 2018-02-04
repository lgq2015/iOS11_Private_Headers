/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPMetadataUnit : HMFObject {
    NSString * _name;
    NSString * _unitDescription;
}

@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *unitDescription;

+ (id)init:(id)arg1 withDictionary:(id)arg2;

- (void).cxx_destruct;
- (id)description;
- (void)dump;
- (id)generateDictionary;
- (id)initWithName:(id)arg1 description:(id)arg2;
- (id)name;
- (void)setName:(id)arg1;
- (void)setUnitDescription:(id)arg1;
- (id)unitDescription;

@end
