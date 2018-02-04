/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMXMLReparserContext : NSObject {
    NSDictionary * _attributesToMerge;
    NSArray * _attributesToPreserve;
    NSError * _error;
    NSString * _inContent;
    NSString * _outContent;
}

@property (readonly, retain) NSString *_inContent;
@property (nonatomic, readonly, retain) NSDictionary *attributesToMerge;
@property (nonatomic, readonly, retain) NSArray *attributesToPreserve;
@property (nonatomic, readonly, retain) NSError *error;
@property (nonatomic, readonly, copy) NSString *outContent;

- (id)_inContent;
- (void)_setOutContent:(id)arg1 error:(id)arg2;
- (id)attributesToMerge;
- (id)attributesToPreserve;
- (void)dealloc;
- (id)error;
- (id)initWithContent:(id)arg1 attributesToPreserve:(id)arg2 attributesToMerge:(id)arg3;
- (id)outContent;

@end
