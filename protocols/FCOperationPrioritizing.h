/* made by EzioChiu.
 */

@protocol FCOperationPrioritizing <NSObject>

@required

- (long long)relativePriority;
- (void)setRelativePriority:(long long)arg1;

@end
