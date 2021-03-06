/* Generated by RuntimeBrowser.
 */

@protocol TSDMixing

@required

- (id)mixedObjectWithFraction:(float)arg1 ofObject:(id)arg2;
- (int)mixingTypeWithObject:(id)arg1 context:(id <TSDMixingTypeContext>)arg2;

@optional

+ (BOOL)canMixWithNilObjects;
+ (NSArray *)mixableObjectClasses;

- (id)mixedBaseObjectWithObject:(id)arg1;

@end
