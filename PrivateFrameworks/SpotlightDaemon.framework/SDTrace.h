/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
 */

@interface SDTrace : NSObject {
    int  _current;
    SDTraceItem * _items;
    NSString * _title;
}

@property (nonatomic, readonly) int current;
@property (nonatomic, retain) NSString *title;

+ (void)initialize;

- (void).cxx_destruct;
- (long long)addLabel:(id)arg1 identifier:(long long)arg2 duration:(double)arg3 string:(id)arg4 data:(id)arg5;
- (int)current;
- (id)description;
- (id)init;
- (id)initWithTitle:(id)arg1;
- (id)items;
- (void)setTitle:(id)arg1;
- (id)title;

@end
