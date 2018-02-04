/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/vCard.framework/vCard
 */

@interface CNVCardDateScanner : NSObject {
    unsigned long long  _position;
    NSString * _string;
}

@property (readonly) unsigned long long position;

+ (id)scannerWithString:(id)arg1;

- (void).cxx_destruct;
- (id)initWithString:(id)arg1;
- (bool)isAtEnd;
- (unsigned long long)lengthOfCalendarUnit:(unsigned long long)arg1;
- (unsigned short)nextCharacter;
- (unsigned long long)position;
- (long long)scanCalendarUnit:(unsigned long long)arg1;
- (long long)scanComponentValueOfLength:(unsigned long long)arg1;
- (bool)scanLeapMarker;

@end
