/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
 */

@interface ABVCardDateScanner : NSObject {
    unsigned long long  _position;
    NSString * _string;
}

@property (readonly) unsigned long long position;

+ (id)scannerWithString:(id)arg1;

- (id)initWithString:(id)arg1;
- (bool)isAtEnd;
- (unsigned long long)lengthOfCalendarUnit:(unsigned long long)arg1;
- (unsigned short)nextCharacter;
- (unsigned long long)position;
- (long long)scanCalendarUnit:(unsigned long long)arg1;
- (long long)scanComponentValueOfLength:(unsigned long long)arg1;
- (bool)scanLeapMarker;

@end
