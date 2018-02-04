/* made by EzioChiu.
 */

@protocol OABFillPropertiesManager <OABColorPropertiesManager>

@required

- (int)fillAngle;
- (int)fillBgAlpha;
- (unsigned int)fillBlipID;
- (NSString *)fillBlipName;
- (int)fillFgAlpha;
- (int)fillFocus;
- (int)fillFocusBottom;
- (int)fillFocusLeft;
- (int)fillFocusRight;
- (int)fillFocusTop;
- (const struct EshTablePropVal<EshGradientStop> { }*)fillGradientColors;
- (int)fillType;

@end
