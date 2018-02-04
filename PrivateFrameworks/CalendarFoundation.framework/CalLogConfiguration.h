/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalLogConfiguration : NSObject {
    NSString * _name;
    NSMutableArray * _nodes;
}

@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSMutableArray *nodes;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithDetailedDefinition:(id)arg1;
- (id)initWithSimpleDefinition:(id)arg1;
- (id)name;
- (id)nodes;
- (void)parseConfigurationDefinition:(id)arg1;
- (id)parseFilterDefinition:(id)arg1;
- (id)parseNodeDefinition:(id)arg1;
- (id)parseWriterDefinition:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNodes:(id)arg1;

@end
