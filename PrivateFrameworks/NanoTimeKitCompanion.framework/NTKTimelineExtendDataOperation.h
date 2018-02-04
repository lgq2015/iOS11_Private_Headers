/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKTimelineExtendDataOperation : NTKTimelineDataOperation {
    NSDate * _boundaryDate;
    bool  _extendsLeft;
    id /* block */  _handler;
}

@property (nonatomic, copy) id /* block */ handler;

- (void).cxx_destruct;
- (void)_cancel;
- (void)_extendLeft;
- (void)_extendRight;
- (void)_invokeHandlerWithEntries:(id)arg1;
- (void)_start;
- (id /* block */)handler;
- (void)setExtendsLeftFromDate:(id)arg1;
- (void)setExtendsRightFromDate:(id)arg1;
- (void)setHandler:(id /* block */)arg1;

@end
