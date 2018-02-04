/* made by EzioChiu
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKCustomFieldNode : SKFieldNode

@property (nonatomic, copy) id /* block */ block;

- (id)_descriptionClassName;
- (void)_initialize;
- (id /* block */)batchBlock;
- (id /* block */)block;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setBatchBlock:(id /* block */)arg1;
- (void)setBlock:(id /* block */)arg1;

@end
