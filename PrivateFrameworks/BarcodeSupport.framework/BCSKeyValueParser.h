/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
 */

@interface BCSKeyValueParser : NSObject {
    unsigned long long  _currentIndex;
    NSMutableDictionary * _keyValuePairs;
    NSString * _string;
    unsigned long long  _stringLength;
}

@property (nonatomic, readonly, copy) NSDictionary *keyValuePairs;

- (void).cxx_destruct;
- (unsigned long long)_indexOfDelimiter:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)_numberOfPreviousBackSlashesFromIndex:(unsigned long long)arg1 withinRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (bool)_parseNextKeyValuePair;
- (id)initWithString:(id)arg1 startIndex:(unsigned long long)arg2;
- (id)keyValuePairs;

@end
