//SpecialAttack
//{
//	dwAttackId		<set id of attack>
//	fChance			<chance to execute the attack>
//}
//
//RegisterMoverAttacks
//{
//	mover 			<mover id>
//	minWaitTime		<min wait time between special attacks in seconds>
//	attack			<id of special atk; multiple entries possible>
//}


SpecialAttack
{
	dwAttackId		1
	fChance			0.1
}

RegisterMoverAttacks
{
	mover 			MI_AIBATT1
	minWaitTime		5
	attack			1
	attack 			2
}

