/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataDetectorsNaturalLanguage.framework/DataDetectorsNaturalLanguage
 */

@interface IPFeatureData : IPFeature {
    NSMutableDictionary * _contextDictionary;
    unsigned long long  _type;
    id  _value;
}

@property (readonly) NSMutableDictionary *contextDictionary;
@property unsigned long long type;
@property (retain) id value;

+ (id)featureDataWithType:(unsigned long long)arg1 value:(id)arg2 matchRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;

- (void).cxx_destruct;
- (id)contextDictionary;
- (id)description;
- (id)nGramMarker;
- (void)setType:(unsigned long long)arg1;
- (void)setValue:(id)arg1;
- (unsigned long long)type;
- (id)value;

@end
