/*--------------------------------*- C++ -*----------------------------------*\
  =========                 |
  \\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox
   \\    /   O peration     | Website:  https://openfoam.org
    \\  /    A nd           | Version:  6
     \\/     M anipulation  |
\*---------------------------------------------------------------------------*/
FoamFile
{
    version     2.0;
    format      ascii;
    class       volScalarField;
    location    "0";
    object      p;
}
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

dimensions      [0 2 -2 0 0 0 0];

internalField   uniform 0;

boundaryField
{
   top
    {
        type            fixedValue;
        value           uniform 0;
    }
    inlet
    {
        type            fixedValue;
        value           uniform 0;
    }
    outlet
    {
        type            fixedValue;
        value           uniform 0;
    }
    front
    {
        type            fixedValue;
        value           uniform 0;
    }
    back
    {
		type            fixedValue;
        value           uniform 0;
    }
    bottom
    {
        type            zeroGradient;
    }
}


// ************************************************************************* //
