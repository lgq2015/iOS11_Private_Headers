/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKEventDateRef : NSObject {
    NSDate * _date;
    _DKEvent * _event;
    unsigned long long  _type;
}

@property (retain) NSDate *date;
@property (retain) _DKEvent *event;
@property unsigned long long type;

- (void).cxx_destruct;
- (id)date;
- (id)event;
- (id)initWithDate:(id)arg1 type:(unsigned long long)arg2 event:(id)arg3;
- (void)setDate:(id)arg1;
- (void)setEvent:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
