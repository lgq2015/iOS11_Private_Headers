/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchAds.framework/SearchAds
 */

@interface ADFrequencyCap : NSObject {
    NSString * _adMetadata;
    NSString * _identifier;
    double  _setTime;
}

@property (nonatomic, retain) NSString *adMetadata;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) double setTime;

- (void).cxx_destruct;
- (id)adMetadata;
- (id)description;
- (id)dictionaryRepresentation;
- (id)identifier;
- (id)initWithDictionary:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (void)setAdMetadata:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setSetTime:(double)arg1;
- (double)setTime;
- (id)splitCapData:(id)arg1;

@end
