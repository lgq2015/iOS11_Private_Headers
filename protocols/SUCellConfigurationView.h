/* made by EzioChiu.
 */

@protocol SUCellConfigurationView <NSObject>

@required

- (bool)highlightsOnlyContentView;
- (bool)isHighlighted;
- (void)reloadView;
- (void)setHighlighted:(bool)arg1;

@end
