/* made by EzioChiu.
 */

@protocol VCAudioIOControllerControl <NSObject>

@required

- (void)startClient:(VCAudioIOControllerClient *)arg1;
- (void)stopClient:(VCAudioIOControllerClient *)arg1;
- (void)updateClient:(VCAudioIOControllerClient *)arg1;

@optional

- (void)refreshInputMetering;
- (void)refreshOutputMetering;

@end
