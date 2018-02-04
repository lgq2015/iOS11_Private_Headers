/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface _TempToken : NSObject <GEOServerFormatToken> {
    <GEOTransitArtworkDataSource> * _artworkValue;
    <GEOServerFormatTokenPriceValue> * _priceValue;
    NSString * _stringValue;
    NSArray * _timeStampValues;
    NSString * _token;
    long long  _type;
    unsigned int  _value1;
    unsigned int  _value2;
    NSArray * _value3s;
}

@property (nonatomic, retain) <GEOTransitArtworkDataSource> *artworkValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <GEOServerFormatTokenPriceValue> *priceValue;
@property (nonatomic, retain) NSString *stringValue;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *timeStampValues;
@property (nonatomic, retain) NSString *token;
@property (nonatomic) long long type;
@property (nonatomic) unsigned int value1;
@property (nonatomic) unsigned int value2;
@property (nonatomic, readonly) NSArray *value3s;

- (void).cxx_destruct;
- (id)artworkValue;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)priceValue;
- (void)setArtworkValue:(id)arg1;
- (void)setPriceValue:(id)arg1;
- (void)setStringValue:(id)arg1;
- (void)setTimeStampValues:(id)arg1;
- (void)setToken:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setValue1:(unsigned int)arg1;
- (void)setValue2:(unsigned int)arg1;
- (id)stringValue;
- (id)timeStampValues;
- (id)token;
- (long long)type;
- (unsigned int)value1;
- (unsigned int)value2;
- (id)value3s;

@end
