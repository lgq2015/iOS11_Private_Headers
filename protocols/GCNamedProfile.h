/* made by EzioChiu.
 */

@protocol GCNamedProfile <NSObject>

@required

- (id)initWithController:(GCController *)arg1;
- (GCControllerElement *)inputForElement:(struct __IOHIDElement { }*)arg1;
- (NSString *)name;
- (void)setController:(GCController *)arg1;
- (void)setPlayerIndex:(long long)arg1;
- (id /* block */)valueChangedHandler:(void *)arg1; // needs 1 arg types, found 20: id /* block */, id, void*, void*, unsigned char, unsigned char, out in void*, const out long, long, void*, const void*, long, void*, void*, void*, in void*, void*, void*, id, SEL

@optional

- (void)appDidBecomeActive;
- (void)appWillResignActive;
- (unsigned int)sampleRate;
- (void)set_motion:(GCMotion *)arg1;

@end
