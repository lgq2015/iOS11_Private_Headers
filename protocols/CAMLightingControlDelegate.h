/* made by EzioChiu.
 */

@protocol CAMLightingControlDelegate <NSObject>

@required

- (void)lightingControlDidChangeSelectedLightingType:(CAMLightingControl *)arg1;

@optional

- (void)lightingControl:(CAMLightingControl *)arg1 willChangeExpanded:(bool)arg2;
- (void)lightingControlDidChangeExpanded:(CAMLightingControl *)arg1;

@end
