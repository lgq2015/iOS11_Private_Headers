/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSColor : NSObject <NSCoding> {
    unsigned char  _blue;
    unsigned char  _green;
    unsigned char  _red;
}

+ (bool)colorDetailsAreEffectivelyDifferentFirstColor:(id)arg1 secondColor:(id)arg2 firstSymbolicName:(id)arg3 secondSymbolicName:(id)arg4;
+ (id)symbolicColorForLegacyRGB:(id)arg1;

- (unsigned char)blue;
- (void)encodeWithCoder:(id)arg1;
- (unsigned char)green;
- (id)initWithCoder:(id)arg1;
- (id)initWithRed:(unsigned char)arg1 green:(unsigned char)arg2 blue:(unsigned char)arg3;
- (unsigned char)red;

@end
