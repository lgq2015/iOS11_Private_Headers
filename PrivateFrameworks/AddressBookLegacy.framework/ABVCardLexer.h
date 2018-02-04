/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
 */

@interface ABVCardLexer : NSObject {
    NSArray * _activeTokenSets;
    char * _bytes;
    unsigned int  _cursor;
    NSMutableData * _data;
    int  _errorCount;
    unsigned long long  _length;
    unsigned int  _peakedPoint;
    ABVCardWatchdogTimer * _timer;
    bool  _unicode;
}

- (bool)_advancePastLineFoldingSequenceIfNeeded;
- (void)_applyNextStringInEncoding:(unsigned long long)arg1 quotedPrintable:(bool)arg2 stopTokens:(int)arg3 trim:(bool)arg4 intoString:(id)arg5;
- (bool)advancePastEOL;
- (bool)advancePastEOLSingle;
- (bool)advancePastEOLUnicode;
- (bool)advanceToEOL;
- (bool)advanceToEOLSingle;
- (bool)advanceToEOLUnicode;
- (void)advanceToPeakPoint;
- (int)advanceToSingleByteString;
- (int)advanceToString;
- (bool)advanceToToken:(int)arg1 throughTypes:(int)arg2;
- (int)advanceToUnicodeString;
- (bool)advancedPastToken:(int)arg1;
- (bool)atEOF;
- (unsigned int)cursor;
- (void)dealloc;
- (int)errorCount;
- (void)finalize;
- (id)initWithData:(id)arg1 watchdogTimer:(id)arg2;
- (id)nextArraySeperatedByToken:(int)arg1 stoppingAt:(int)arg2 inEncoding:(unsigned long long)arg3;
- (id)nextBase64Data;
- (id)nextBase64Line:(bool*)arg1;
- (id)nextEscapedCharacter;
- (id)nextQuotedPrintableData;
- (id)nextSingleByteBase64Line:(bool*)arg1;
- (id)nextSingleByteStringInEncoding:(unsigned long long)arg1 quotedPrintable:(bool)arg2 stopTokens:(int)arg3 trim:(bool)arg4;
- (id)nextStringInEncoding:(unsigned long long)arg1 quotedPrintable:(bool)arg2 stopTokens:(int)arg3 trim:(bool)arg4;
- (int)nextTokenPeak:(bool)arg1;
- (int)nextTokenPeakSingle:(bool)arg1 length:(int)arg2;
- (int)nextTokenPeakUnicode:(bool)arg1 length:(int)arg2;
- (id)nextUnicodeBase64Line:(bool*)arg1;
- (id)nextUnicodeStringStopTokens:(int)arg1 quotedPrintable:(bool)arg2 trim:(bool)arg3;
- (int)tokenAtCursor;
- (id)tokenName:(int)arg1;
- (id)tokenSetForLength:(int)arg1;

@end