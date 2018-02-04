/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

@interface TKSmartCardUserInteractionForPINOperation : TKSmartCardUserInteraction <NSSecureCoding> {
    unsigned long long  _PINCompletion;
    NSArray * _PINMessageIndices;
    NSLocale * _locale;
    NSData * _resultData;
    unsigned short  _resultSW;
}

@property unsigned long long PINCompletion;
@property (retain) NSArray *PINMessageIndices;
@property (retain) NSLocale *locale;
@property (retain) NSData *resultData;
@property unsigned short resultSW;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)PINCompletion;
- (id)PINMessageIndices;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)locale;
- (id)resultData;
- (unsigned short)resultSW;
- (void)setLocale:(id)arg1;
- (void)setPINCompletion:(unsigned long long)arg1;
- (void)setPINMessageIndices:(id)arg1;
- (void)setResultData:(id)arg1;
- (void)setResultSW:(unsigned short)arg1;

@end
