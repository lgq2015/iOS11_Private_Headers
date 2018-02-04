/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKServerFormattedString : NSObject <NSCoding, NSCopying> {
    <GEOServerFormattedString> * _geoServerString;
    MKServerFormattedStringParameters * _parameters;
}

@property (nonatomic, readonly) <GEOServerFormattedString> *geoServerString;
@property (nonatomic, readonly, copy) MKServerFormattedStringParameters *parameters;

- (void).cxx_destruct;
- (id)_parametersByScrubbingUnusedOverrideVariablesFromParameters:(id)arg1 geoServerString:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)geoServerString;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithGeoServerString:(id)arg1 parameters:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToServerFormattedString:(id)arg1;
- (id)multiPartAttributedStringWithAttributes:(id)arg1;
- (id)parameters;

@end
